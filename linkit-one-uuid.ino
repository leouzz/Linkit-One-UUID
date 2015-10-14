void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  //Generating RandomSeed 
  randomSeed(analogRead(0)+analogRead(1));

  //Create a random uuid4 code
  uuid4();
  
}

void loop() {
  
}

void uuid4(){
  hex_print(8,0,15);
  Serial.print("-");
  hex_print(4,0,15);
  Serial.print("-");
  Serial.print("4");
  hex_print(3,0,15);
  Serial.print("-");
  hex_print(1,8,11);
  hex_print(3,0,15);
  Serial.print("-");
  hex_print(12,0,15);
  
}

void hex_print(int n,int mn ,int mx ){
for(;n>0;n--){
int X = random(mn,mx);
Serial.print ( X ,HEX );
}
}

