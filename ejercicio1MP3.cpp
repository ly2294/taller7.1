#include <iostream>

using namespace std;

struct cancion{
    char Artista [30];
    char Titulo[60];
    float Duracion;
    float Tamanio;
};
void anadircancion(cancion[],int);
void mostrarTitulo(cancion[],int);
bool existeArtistaTitulo(cancion[],int);
cancion crearCancion();
int main(){
    int L=3;
    cancion c[L];
    anadircancion(c,L);
    mostrarTitulo(c,L);
    existeArtistaTitulo(c,L);

return 0;
}

void anadircancion(cancion c[],int L){
    for(int i=0; i<L;i++){
        c[i]=crearCancion();
    }
}
cancion crearCancion(){
    cancion ca;
    cout<<"Añadir una cancion"<<endl;
    cout<<"ingrese artista"<<endl;
    cin.getline(ca.Artista,30);
    cout<<"ingrese titulo"<<endl;
    cin.getline(ca.Titulo,60);
    cout<<"ingrese duracion"<<endl;
    cin>>ca.Duracion;
    cout<<"ingrese tamaño (kb)"<<endl;
    cin>>ca.Tamanio;
    cin.ignore();

}
void mostrarTitulo(cancion c[],int L){
    for(int i=0; i<L;i++){
        cout<<"cancion numero"<<i+1<<endl;
        cout<<"mostrar cancion"<<c[i].Titulo<<endl;
    }
}
bool existeArtistaTitulo(cancion c[],int L){
     char buscar[30];
     cout<<"ingrese palabra a buscar:"<<endl;
     cin.getline(buscar,30);
     for(int i=0; i<L;i++){
            if(c[i].Artista==buscar || c[i].Titulo == buscar){
                cout<<"cancion numero"<<i+1<<endl;
                cout<<"mostrar cancion"<<c[i].Titulo<<endl;
                cout<<"artista cancion"<<c[i].Artista<<endl;

            }else{
                cout<<"no existe"<<endl;
            }
    }
}
