#include<iostream>
#include<cmath>
using namespace std;
float sqrt(float k,float n,float num)
{
  float ans;
  for(int j=1;j<=n;++j)
  {
    for(float i=pow(0.1,j);(k+i)*(k+i)<=num;i+=pow((0.1),j))
    {
      ans=k+i;
    }
  }
  return ans;
}

int main()
{
  float num,n;

  cin>>num>>n;
  float k=0;

  for(int i=0;i*i<=num;++i)
  {
    k=i;
  }

  cout<<sqrt(k,n,num);

}
