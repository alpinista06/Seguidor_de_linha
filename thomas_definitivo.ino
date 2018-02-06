// declaracao dos sensores
/*int sensor1e = 0; 
int sensor2d = 0; 
int sensor3d = 0; 
int sensor4e = 0; 


//declaracao dos motores
int motor1_a=4;
int motor1_b=2;
int motor2_a=6;
int motor2_b=7;

//pinos pwm
int controle_A = 3;
int controle_B = 5;

// bloco das funcoes
/*
  int teste_sensores(int sensor1e , int sensor2d ,int sensor3d , int sensor4e)
   {
    if(sensor1e ==0)
    {
      Serial.println("sensor 1 detectado");
    }
    
        if(sensor2d ==0)
    {
      Serial.println("sensor 2 detectado");
    }
    
        if(sensor3d ==0)
    {
      Serial.println("sensor 3 detectado");
    }
    
        if(sensor4e ==0)
    {
      Serial.println("sensor 4 detectado");
    }

   }
*/


    void movimento_frente()
    {
        digitalWrite(motor1_a , HIGH);
        digitalWrite(motor1_b , LOW);
        digitalWrite(motor2_a , LOW);
        digitalWrite(motor2_b , HIGH);
       // delay(2000);
    }
    
      void movimento_re()
      {
        digitalWrite(motor1_a , LOW);
        digitalWrite(motor1_b , HIGH);
        digitalWrite(motor2_a , HIGH);
        digitalWrite(motor2_b , LOW);
      //  delay(2000);
      }
       void giro_a_direita()
       {/*girodireita*/
        digitalWrite(motor1_a , HIGH);
        digitalWrite(motor1_b , LOW);
        digitalWrite(motor2_a , LOW);
        digitalWrite(motor2_b , LOW);
       // delay(2000);
       }
       
        void giro_a_esquerda()
        {
         digitalWrite(motor1_a , LOW);
        digitalWrite(motor1_b , LOW);
        digitalWrite(motor2_a , LOW);
        digitalWrite(motor2_b , HIGH);
       // delay(2000);
        }
        
        void motores_parados()
        {
         digitalWrite(motor1_a , HIGH);
        digitalWrite(motor1_b , HIGH);
        digitalWrite(motor2_a , HIGH);
        digitalWrite(motor2_b , HIGH);
      //  delay(1000); 
        }
// fim do bloco das funcoes

void setup()  
{  
    Serial.begin(9600); 
  
  // configuracao dos sensores
  pinMode(8, INPUT);
  pinMode(9, INPUT); 
   pinMode(10, INPUT);
   pinMode(11, INPUT);   
   
  
  // configuracoes dos motores
  pinMode (motor1_a , OUTPUT);
  pinMode (motor1_b , OUTPUT);
  pinMode (motor2_a , OUTPUT);
  pinMode (motor2_b , OUTPUT);  

} 


void loop()
{

 // analogWrite(controle_A,50 );
 // analogWrite(controle_B,50 );

  
    sensor1e = digitalRead(8); 
    sensor2d = digitalRead(9); 
    sensor3d = digitalRead(10);
    sensor4e = digitalRead(11);  
    
 // teste_sensores (sensor1e , sensor2d, sensor3d ,sensor4e);
// essa funcao faz o teste dos sensoresde modo individual  
     
  if (sensor1e ==0 && sensor2d==0 && sensor3d==0 && sensor4e == 0)
  {  
    Serial.println("Todos os sensores detctados !"); 
   
       motores_parados();
  } 
  
    if (sensor1e ==1 && sensor2d==1 && sensor3d==1 && sensor4e == 1)
  {  
    Serial.println("nenhum detectado !"); 
   
         analogWrite(controle_A,255 );
      analogWrite(controle_B,250);
            movimento_re();
  } 
  
  if (sensor1e == 0 && sensor2d ==0 && sensor3d ==1 && sensor4e == 1) 
  
   {  
    Serial.println("Sensore 1e e 2d Detectados");
      analogWrite(controle_A,255 );
      analogWrite(controle_B,250);
    
     movimento_frente();   
  }
  if (sensor1e ==0 && sensor4e == 0 && sensor2d==1 && sensor3d==1)
  
  {         
  
      Serial.println("Sensores 1e , 4e Objeto : detectados !");
      
        analogWrite(controle_A,100 );
  analogWrite(controle_B,255 );
          movimento_frente(); //giro_a_esquerda();

}
if (sensor2d==0 && sensor3d==0 && sensor1e ==1 && sensor4e == 1)
   {
          Serial.println("Sensores 2d , 3d Objeto : detectados !");
         
           analogWrite(controle_A, 255 );
  analogWrite(controle_B,100 ); 
         movimento_frente();// giro_a_direita();
  }
  
  if (sensor2d==1 && sensor3d==1 && sensor1e ==1 && sensor4e == 0)
   {
          Serial.println("Sensore 4e Objeto : detectados !");
         
           analogWrite(controle_A, 80 );
  analogWrite(controle_B,255 ); 
         movimento_frente();// giro_a_direita();
  }
  
    if (sensor2d==1 && sensor3d==0 && sensor1e ==1 && sensor4e == 1)
   {
          Serial.println("Sensore 3d Objeto : detectados !");
         
           analogWrite(controle_A, 255 );
           analogWrite(controle_B,80 ); 
         movimento_frente();// giro_a_direita();
  }
  if (sensor2d==1 && sensor3d==1 && sensor1e ==0 && sensor4e == 1)
   {
          Serial.println("Sensore 1e Objeto : detectados !");
         
           analogWrite(controle_A, 220 );
  analogWrite(controle_B,170 ); 
         movimento_frente();// giro_a_direita();
  }
  
    if (sensor2d==0 && sensor3d==1 && sensor1e ==1 && sensor4e == 1)
   {
          Serial.println("Sensore 2d Objeto : detectados !");
         
           analogWrite(controle_A, 170 );
  analogWrite(controle_B,220 ); 
         movimento_frente();// giro_a_direita();
  }
  if (sensor2d==1 && sensor3d==0 && sensor1e ==0 && sensor4e == 0)
   {
          Serial.println("Sensore 1e Objeto : detectados !");
         
           analogWrite(controle_A, 220 );
  analogWrite(controle_B,170 ); 
         movimento_frente();// giro_a_direita();
  }
  
    if (sensor2d==0 && sensor3d==0 && sensor1e ==0 && sensor4e == 1)
   {
          Serial.println("Sensore 2d Objeto : detectados !");
         
           analogWrite(controle_A, 170 );
  analogWrite(controle_B,220 ); 
         movimento_frente();// giro_a_direita();
  }
}
  */
