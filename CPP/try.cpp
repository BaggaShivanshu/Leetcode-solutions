#include <iostream>
#include <vector>
void print(std::vector<int>v)
    {
        for(int i=0;i<v.size();i++)
            std::cout<<v[i]<<" ";
        std::cout<<"\n";
    }
int main()
{
    int num = 3;
    std::vector<int> v(num+1,0);
    print(v);


    v[0]=1;
    v[1]=1;

    print(v);

    for(int i=2; i<=num; i++)
        for(int j=1; j<=i; j++)
            v[i]+=v[i-j]*v[j-1];

    print(v);

}