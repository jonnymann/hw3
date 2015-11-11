#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;
//--------------------------------------------------
// plenty of lines here
//--------------------------------------------------
void fill(double* p, const int N)
{
    for(int i=0;i<N;i++)
    p[i]=(double)rand()/RAND_MAX;
}

void mean_variance(double* p, const int N,double& mean, double& var)
{
    mean=0;
    var=0;
    
    for(int i=0;i<N;i++)
        mean=mean+p[i];                                 
    mean=mean/N;                   //Berrechnung des Mittelwertes 

    for(int i=0;i<N;i++)
        var=var+pow(p[i]-mean,2);
    var=var/N;
}

int main(){
   const int N = 100;
   double p[N];
   double mean, var;
   srand (time(NULL));

   
   fill(p,N);
   mean_variance(p,N,mean,var);

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
