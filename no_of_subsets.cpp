#include<bits/stdc++.h>
using namespace std ;

vector <vector<int> > v;

void generate(vector<int> &subset,int i,vector<int> &nums){
    if(i==nums.size()){
        v.push_back(subset);
        return ;
    } 
    // if ith element is  considered
    // cout<<nums[i]<<" included"<<endl;
    subset.push_back(nums[i]);
    generate(subset,i+1,nums);
    subset.pop_back();
    // if ith element is not considered
    generate(subset,i+1,nums);
}
int main()
{
    vector<int> nums={1,2,3};
    vector<int> Subset;
    generate(Subset,0,nums);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0 ;
}