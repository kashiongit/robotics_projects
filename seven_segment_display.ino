const int PUSH_BUTTON1=2;
const int PUSH_BUTTON2=3;
const int RED_LED = 13;
const int SS_DP = 7;
const int SS_A = 4;
const int SS_B = 5;
const int SS_C = 6;
const int SS_D = 9;
const int SS_E = 8;
const int SS_F = 10;
const int SS_G = 11;
 

int count=0 ;

int status1;
int status2;

void setup() {
  // put your setup code here, to run once:
  //inputpullup
  pinMode(PUSH_BUTTON1, INPUT_PULLUP );
  pinMode(PUSH_BUTTON2, INPUT_PULLUP );

  //output
  pinMode(RED_LED, OUTPUT );
  pinMode(SS_DP, OUTPUT );
  pinMode(SS_A, OUTPUT );
  pinMode(SS_B, OUTPUT );
  pinMode(SS_C, OUTPUT );
  pinMode(SS_D, OUTPUT );
  pinMode(SS_F, OUTPUT );
  pinMode(SS_G, OUTPUT );
  
// int count ;
}
// int count=0 ;
#define displayOnSevenSegment;


void loop() {
  // put your main code here, to run repeatedly:
 displayOnSevenSegment(count);
  
  
  status1 = digitalRead(PUSH_BUTTON1);
  if(status1 == HIGH) {//push button off
    digitalWrite(RED_LED,LOW);
  }
  else //push button on
    {digitalWrite(RED_LED,HIGH);
    delay(500);
    count ++;
    if(count>9)
    count = 9;
    }
  status2 = digitalRead(PUSH_BUTTON2);  
  if(status2 == HIGH) {//push button off
    digitalWrite(RED_LED,LOW);
  }
  else //push button on
    {digitalWrite(RED_LED,HIGH);
    delay(500);
    count --;
    if(count<0)
    count = 0;
    }



void displayOnSevenSegment(count) ;
{
  //error checking
 //CLEAR THE DISPLAY
  digitalWrite(SS_DP, LOW);
  digitalWrite(SS_A, LOW);
  digitalWrite(SS_B, LOW);
  digitalWrite(SS_C, LOW);
  digitalWrite(SS_D, LOW);
  digitalWrite(SS_E, LOW);
  digitalWrite(SS_F, LOW);
  digitalWrite(SS_G, LOW);

  
  }
  

  switch(count) {
    case 0:
            digitalWrite(SS_DP, LOW);
            digitalWrite(SS_A, HIGH);
            digitalWrite(SS_B, HIGH);
            digitalWrite(SS_C, HIGH);
            digitalWrite(SS_D, HIGH);
            digitalWrite(SS_E, HIGH);
            digitalWrite(SS_F, HIGH);
            digitalWrite(SS_G, LOW);
            
            break;

    case 1:
            digitalWrite(SS_DP, LOW);
            digitalWrite(SS_A, LOW);
            digitalWrite(SS_B, HIGH);
            digitalWrite(SS_C, HIGH);
            digitalWrite(SS_D, LOW);
            digitalWrite(SS_E, LOW);
            digitalWrite(SS_F, LOW);
            digitalWrite(SS_G, LOW);
            
            break;

    case 2:
            digitalWrite(SS_DP, LOW);
            digitalWrite(SS_A, HIGH);
            digitalWrite(SS_B, HIGH);
            digitalWrite(SS_C, LOW);
            digitalWrite(SS_D, HIGH);
            digitalWrite(SS_E, HIGH);
            digitalWrite(SS_F, LOW);
            digitalWrite(SS_G, HIGH);
            
            break;

    case 3:
            digitalWrite(SS_DP, LOW);
            digitalWrite(SS_A, HIGH);
            digitalWrite(SS_B, HIGH);
            digitalWrite(SS_C, HIGH);
            digitalWrite(SS_D, HIGH);
            digitalWrite(SS_E, LOW);
            digitalWrite(SS_F, LOW);
            digitalWrite(SS_G, HIGH);
           
            break;

    case 4:
            digitalWrite(SS_DP, LOW);
            digitalWrite(SS_A, LOW);
            digitalWrite(SS_B, HIGH);
            digitalWrite(SS_C, HIGH);
            digitalWrite(SS_D, LOW);
            digitalWrite(SS_E, LOW);
            digitalWrite(SS_F, HIGH);
            digitalWrite(SS_G, HIGH);
            
            break;

    case 5:
            digitalWrite(SS_DP, LOW);
            digitalWrite(SS_A, HIGH);
            digitalWrite(SS_B, LOW);
            digitalWrite(SS_C, HIGH);
            digitalWrite(SS_D, HIGH);
            digitalWrite(SS_E, LOW);
            digitalWrite(SS_F, HIGH);
            digitalWrite(SS_G, HIGH);
            
            break;

    case 6:
            digitalWrite(SS_DP, LOW);
            digitalWrite(SS_A, HIGH);
            digitalWrite(SS_B, LOW);
            digitalWrite(SS_C, HIGH);
            digitalWrite(SS_D, HIGH);
            digitalWrite(SS_E, HIGH);
            digitalWrite(SS_F, HIGH);
            digitalWrite(SS_G, HIGH);
            
            break;

    case 7:
            digitalWrite(SS_DP, LOW);
            digitalWrite(SS_A, HIGH);
            digitalWrite(SS_B, HIGH);
            digitalWrite(SS_C, HIGH);
            digitalWrite(SS_D, LOW);
            digitalWrite(SS_E, LOW);
            digitalWrite(SS_F, LOW);
            digitalWrite(SS_G, LOW);
           
            break;

    case 8:
            digitalWrite(SS_DP, LOW);
            digitalWrite(SS_A, HIGH);
            digitalWrite(SS_B, HIGH);
            digitalWrite(SS_C, HIGH);
            digitalWrite(SS_D, HIGH);
            digitalWrite(SS_E, HIGH);
            digitalWrite(SS_F, HIGH);
            digitalWrite(SS_G, HIGH);
            
            break;

    case 9:
            digitalWrite(SS_DP, LOW);
            digitalWrite(SS_A, HIGH);
            digitalWrite(SS_B, HIGH);
            digitalWrite(SS_C, HIGH);
            digitalWrite(SS_D, HIGH);
            digitalWrite(SS_E, LOW);
            digitalWrite(SS_F, HIGH);
            digitalWrite(SS_G, HIGH);
            
            break;

    
          default: digitalWrite(SS_DP,HIGH);       


 
            
  }
  


  // put your setup code here, to run once:u
}

