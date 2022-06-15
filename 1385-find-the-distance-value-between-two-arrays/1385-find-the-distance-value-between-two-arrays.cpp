class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
int s=0;
for(int i=0;i<arr1.size();i++){
count=0;
for(int j=0;j<arr2.size();j++){
int q = mod(arr1[i],arr2[j]);
if(q>d){
count++;
}
}
if(count == arr2.size()){
s++;
}
}
return s;
}
int mod(int a,int b){
int x = a-b;
if(x<0){
return -x;
}
return x;
}
    
};