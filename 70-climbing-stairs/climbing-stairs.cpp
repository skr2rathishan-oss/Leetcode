class Solution {
public:
    int climbStairs(int n){
    vector<int> Table(n+1,0);
    Table[0]=1;
    Table[1]=1;
    for(int i=2;i<=n;i++){
        Table[i]=Table[i-1]+Table[i-2];
    }
    return Table[n];
}
    
};