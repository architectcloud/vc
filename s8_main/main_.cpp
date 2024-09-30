#include "miniwin.h"

using namespace miniwin;

int cuadrado(int x, int y)
{
    //CONTORNO DE LA NAVE
    color_rgb(100,100,100);
    
    rectangulo_lleno(250+x,250+y,260+x,255+y);
     
    rectangulo_lleno(245+x,255+y,250+x,270+y);
    rectangulo_lleno(260+x,255+y,265+x,270+y); 
    
    rectangulo_lleno(240+x,270+y,245+x,295+y);
    rectangulo_lleno(265+x,270+y,270+x,295+y);
    
    rectangulo_lleno(235+x,295+y,240+x,300+y);
    rectangulo_lleno(270+x,295+y,275+x,300+y);
    
    rectangulo_lleno(225+x,290+y,235+x,295+y);
    rectangulo_lleno(275+x,290+y,285+x,295+y);
    
    rectangulo_lleno(220+x,295+y,225+x,330+y);
    rectangulo_lleno(285+x,295+y,290+x,330+y);
    
    rectangulo_lleno(225+x,320+y,240+x,325+y);
    rectangulo_lleno(270+x,320+y,285+x,325+y);
    
    rectangulo_lleno(240+x,325+y,245+x,330+y);
    rectangulo_lleno(265+x,325+y,270+x,330+y);
    
    rectangulo_lleno(245+x,330+y,265+x,335+y);
    
    //Linea Central
    rectangulo_lleno(252+x,305+y,258+x,325+y);
    
    //Color naranja 
    color_rgb(255,177,20);
    
    rectangulo_lleno(225+x,325+y,240+x,330+y);
    rectangulo_lleno(230+x,330+y,235+x,345+y);
    
    rectangulo_lleno(225+x+45,325+y,240+x+45,330+y);
    rectangulo_lleno(230+x+45,330+y,235+x+45,345+y);
    
    //Efecto nave Color rojo
    color(ROJO);
    rectangulo_lleno(225+x,330+y,230+x,345+y);
    rectangulo_lleno(235+x,330+y,240+x,345+y);
    rectangulo_lleno(230+x,345+y,235+x,350+y);
    
    rectangulo_lleno(225+x+45,330+y,230+x+45,345+y);
    rectangulo_lleno(235+x+45,330+y,240+x+45,345+y);
    rectangulo_lleno(230+x+45,345+y,235+x+45,350+y);
  
}

int main()
{   
    vredimensiona(500,500);
    int x=0, y=0;
    int t=tecla();
    while(t != ESCAPE)
    {
         if(t==IZQUIERDA)
         {
            x=x-5, y=y+0;
         
         }else
         if(t==DERECHA){
            x=x+5, y=y+0;         
         }
         borra();
         cuadrado(x,y);
         refresca();
         espera(10);
         t=tecla();     
    }
     
return 0;        
}
