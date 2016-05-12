void setup()
{
  Serial.begin(9600);    
  printTable();
  Serial.println();
  printTableSprintf();
}

void loop()
{
}

void printTable()
{
  Serial.println("\n\nprintTable\n");
  for(int i = 0; i < 256; i++)
  {
    Serial.print(i);
    Serial.print(":\t");
    Serial.print(char(i));  
    if(i%10==0)Serial.println();
    else Serial.print("\t");  
  }  
}

void printTableSprintf()
{
  Serial.println("\n\nprintTableSprintf\n");
  char buffer[100];
  char var;
  for (int i = 0; i < 256; i++)
  {
    if(i%10==0) var  ='\n';
    else var = '\t';
    sprintf(buffer,"%d:\t%c%c",i,char(i),var);
    Serial.print(buffer);
  }
}
