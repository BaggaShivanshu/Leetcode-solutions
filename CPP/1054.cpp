// Distant  barcodes
#include <algorithm>
void print(std::vector<int> & ans)
{
    for(auto it: ans)
        std::cout<<it<<" ";
    std::cout<<"\n";
}
class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcode) {
        
        std::map<int, int> mymap;
        
        for(int i=0;i<barcode.size();i++)
        {
            if(mymap.count(barcode[i])==0)
                mymap.insert(make_pair(barcode[i], 1));
            else
                mymap[barcode[i]]+=1;
        }
        std::priority_queue<std::pair<int, int>> mypq;
        for(std::map<int, int>::iterator it = mymap.begin(); it!=mymap.end();++it )
        {
            int num = it->first;
            int count = it->second;
            mypq.push(make_pair(count, num));
        }
        
        std::vector<int> ans(barcode.size(),0);
        int position = 0;
        
        //std::vector<int> ans;
        while(!mypq.empty())
        {
            std::pair<int, int> topElement= mypq.top();
            int topNumber = topElement.second;
            int topCount = topElement.first; 
            std::cout<<topNumber<<"\n";
            mypq.pop();
           
            // lets fill this is array :D
            while(topCount>0)
            {
                //std::cout<<topCount<<"\n";
                
                position%=barcode.size();
                //std::cout<<"position: "<<position;
                if(position==0)
                {
                    if(ans[position]==0)
                    {
                        ans[position]= topNumber;
                        topCount--;
                    }
                }
                else if(position==barcode.size()-1)
                {
                    if(ans[position]==0 && ans[position-1]!=topNumber)
                    {
                        ans[position] = topNumber;
                        topCount--;
                    }
                }
                else if(ans[position-1]!=topNumber && ans[position+1]!=topNumber)
                {
                    if(ans[position]==0)
                    {
                        ans[position] = topNumber;
                        topCount--;
                    }
                }
                position++;
                //print(ans);
            }
            
            //mypq.pop();
        }
        
        
        
        return ans;
        
    }
};