#include <stdio.h>


int gcd(int u,int v);
float absoluteValue(float x);
float squareRoot(float x);

int main()
{
  int result =0;
  result = gcd(150,35);
  result = gcd(40,7);
  printf("gcd: %d\n",result);

  //testing square root
  printf("%.2f\n", squareRoot(-3.0));
  printf("%.2f\n", squareRoot(16.0));
  printf("%.2f\n", squareRoot(9.0));
  printf("%.2f\n", squareRoot(225.0));



  return 0; 
}

int gcd(int u, int v)
{
  int temp;
  while( v!=0)
  {
    temp = u%v;
    u =v;
    v =temp;
  }
  return u;
}

// float squareRoot(float x)
// {
//   const float epsilon = .00001;
//   float guess = 1.0;
//   float returnValue = 0.0;
//   if(x<0)
//   {
//     printf("Negative argument to squareRoot.\n");
//     returnValue = -1.0;
//   }
//   if(returnValue !=-1.0)
//   { while (aboluteValue(guess*guess-x) >= epsilon)
//       guess = (x/guess+guess)/2.0;
//   }

//   return returnValue;
// }
float squareRoot(float x)
{
    const  float  epsilon = .00001;
    float  guess   = 1.0;
    float returnValue = 0.0;

    if ( x < 0 )
    {
        printf ("Negative argument to squareRoot.\n");
        returnValue = -1.0;
    }
    else
    {
        while  ( absoluteValue (guess * guess - x) >= epsilon )
           guess = ( x / guess + guess ) / 2.0;

        returnValue = guess;
    }

    return returnValue;
}

float absoluteValue(float x)
{
    if (x < 0)
        x = -x;

    return x;
}