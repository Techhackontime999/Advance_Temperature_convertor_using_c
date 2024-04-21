#include <stdio.h>
// program for conversion of one temprature to another temperature formate.
void celcius();
void fohrenheit();
void kelvin();
void reumer();
// function declaration here;



int main ()
{
    int j;
    printf("start for temperature convertion enter 6 for celcius ,7 for fohrenheit,8 for reumer,\n9 for kelvin.\n");
    scanf("%d",&j);
    
        if (j==6)
        {
           celcius();  
        }
        
        else if (j==7)
        {
          fohrenheit();  
        }
        
       else if (j==8)
        {
          reumer();    
        }
        
       else if(j==9)
        {
         kelvin();
        }
         else
    {
        printf("Invalid choice\n");
    }
         
    
    
    
    return 0;
}


// function definition here;
void celcius()
{
   int i;
    float c,x;
    printf("enter c for celcius(degree celcius) data :\n");
    scanf("%f",&c);
printf("in which temperature formate is converted enter 1 for fohrenheit,2 for reumer,3 for kelvin.\n",i); 
scanf("%d",&i);
    
        if (i==1)
        {
          x=((c*9)/5)+32;
          printf("in fohrenheit your temperature is :%f\n ",x);
        }
        if (i==2)
        {
            x=(c*4)/5;
             printf("in reumer your temperature is :%f\n ",x);
        }
        if (i==3)
        {
            x=c+273;
             printf("in kelvin your temperature is :%f\n ",x);
        }
        
    }
    

    

void fohrenheit()
{
   
  int i;
    float f,x;
    printf("enter f for fohrenheit(degree fohrenheit) data :\n");
    scanf("%f",&f);
printf("in which temperature formate is converted enter 1 for celcius,2 for reumer,3 for kelvin.\n"); 
scanf("%d",&i);
   
        if (i==1)
        {
            x=((f-32)*5)/9;
          printf("in celcius your temperature is :%f\n ",x);
        }
        if (i==2)
        {
          x=((f-32)*4)/9;
          printf("in reumer your temperature is :%f\n ",x);  
        }
        if (i==3)
        {
            x=(((f-32)*5)/9)+273;
          printf("in kelvin your temperature is :%f\n ",x);  
        }
        
    
    

     
    
}
void kelvin()
{
 int i;
    float k,x;
    printf("enter k for kelvin(degree kelvin) data :\n");
    scanf("%f",&k);
printf("in which temperature formate is converted enter 1 for fohrenheit,2 for reumer,3 for celcius.\n"); 
scanf("%d",&i);
    
        if (i==1)
        {
             x=(((k-273)*9)/5)+32;
             printf("in fohrenheit your temperature is :%f\n ",x);
        }
        if (i==2)
        {
            x=(((k-273)*4)/5);
           printf("in reumer your temperature is :%f\n ",x); 
        }
        if (i==3)
        {
            x=k-273;
          printf("in celcius your temperature is :%f\n ",x);  
        }
        
    }
    

      
     

void reumer()
{

 int i;
    float r,x;
    printf("enter r for reumer(degree reumer) data :\n");
    scanf("%f",&r);
printf("in which temperature formate is converted enter 1 for fohrenheit,2 for celcius,3 for kelvin.\n"); 
scanf("%d",&i);
    
        if (i==1)
        {
            x=(r*9/4)+32;
          printf("in fohrenheit your temperature is :%f\n ",x); 
        }
        if (i==2)
        {
            x=(r*5)/4;
           printf("in celcius your temperature is :%f\n ",x); 
        }
        if (i==3)
        {
            x=(r*5/4)+273;
          printf("in kelvin your temperature is :%f\n ",x);
        }
        
    }
    

      
    
