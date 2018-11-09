#include"datos_entrenamiento.h"
#include"datos_test.h"

float d1;       
float d2;     
float d3;      
float dist_menor=100;    
float dist_menor1=200;  
float dist_menor2=300;  
float r1;        
float r2;     
float r3;     
int i;
int row=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
 for(;row<120;row++) //contador de filas for lento
  {
    //calcula distancias
          d1= sqrt(pow((matriz[row][0]-prueba[row][0]),2) +  
                   pow((matriz[row][1]-prueba[row][1]),2) +
                   pow((matriz[row][2]-prueba[row][2]),2) +
                   pow((matriz[row][3]-prueba[row][3]),2));
         if(d1<dist_menor) //Comparando el dato siguiente con el actual
         {  
        dist_menor=d1;   //guardo el valor actual
        r1=matriz[row][4];   //intercambio posicion de datos
        r1=r1;    
        }
                   
          d2=sqrt(pow((matriz[row][0]-prueba[row][0]),2) +  
                   pow((matriz[row][1]-prueba[row][1]),2) +
                   pow((matriz[row][2]-prueba[row][2]),2) +
                   pow((matriz[row][3]-prueba[row][3]),2));
        if(d2<dist_menor1&&d2>dist_menor)
        {  
        dist_menor1=d2;  
        r2=matriz[row][4]; 
        r2=r2;  
        }
          d3=sqrt(pow((matriz[row][0]-prueba[row][0]),2) +  
                   pow((matriz[row][1]-prueba[row][1]),2) +
                   pow((matriz[row][2]-prueba[row][2]),2) +
                   pow((matriz[row][3]-prueba[row][3]),2));
   
        if(d3<dist_menor2&&d3>dist_menor1)
        { 
        d3=d3; 
        r3=matriz[row][4]; 
        r3=r3;     
        }
   
  }
   Serial.print("Grupo: ");
 Serial.println(r1);
 Serial.println(dist_menor);
 delay(1000);
 Serial.print("Grupo: ");
 Serial.println(r2);
 Serial.println(dist_menor1);
 delay(1000);
 Serial.print("Grupo: ");
 Serial.println(r3);
 Serial.println(dist_menor2);
delay(1000);
 row=0;
}
