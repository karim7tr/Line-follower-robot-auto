
int IN1 = 4; //Pin pour Le Capteur Gauche 
int IN4 = 9; //Pin pour Le Capteur Droite 
int GA=6,GB=7,DA=13,DB=11; //Pin pour Deux moteurs (GA et GB pour le moteur Gauche, DA et DB pour le moteur de droite) 
void setup() { 
  Serial.begin(9550);
pinMode(IN1,INPUT);
pinMode(IN4,INPUT);
pinMode(DA,OUTPUT);
pinMode(DB,OUTPUT);
pinMode(GA,OUTPUT); 
pinMode(GB,OUTPUT);
}
//on Crée Les Fonctions 
void d() //Fonction qui permet au robot de tourner a droite 
{ 
  digitalWrite(DA,LOW);
analogWrite(DB,150);
analogWrite(GA,150);
digitalWrite(GB,LOW);
} 
void g() //Fonction qui permet au robot de tourner a gauche 
{ 
  analogWrite(DA,150);
  digitalWrite(DB,LOW);
  digitalWrite(GA,LOW);
  analogWrite(GB,150);  
  } 
  void av() //Fonction qui permet au robot de continuer tout droit
  { 
    digitalWrite(DA,LOW); 
    analogWrite(DB,150); 
    digitalWrite(GA,LOW); 
    analogWrite(GB,150);
    } 
    void loop()
    { 
     int in1_val = digitalRead(IN1);
     int in4_val = digitalRead(IN4);
     if ((in1_val) && ( ! in4_val)) //S'il y a du noir à gauche et du blanc à droite, tourner à gauche 
     { 
      Serial.println("Tourner à gauche");
      g();
      } else if (( ! in1_val) && (in4_val)) //S'il y a du blanc à gauche et du noir à droite, tourner à droite
      { 
        Serial.println("Tourner à droite");
      d();
      } else //Si les conditions plus haut ne s'appliquent pas, continuer tout droit
      { 
        Serial.println("Continuer tout droit");
        av();
        } 
        }
  
  
