class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        string a(s, 0, n/2);
        string b(s, n/2, n-1);
        int count1=0, count2=0;
        for(int i=0; i<a.length(); i++){
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
                count1++;
            }
        }
        
        for(int i=0; i<b.length(); i++){
            if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u' || b[i]=='A' || b[i]=='E' || b[i]=='I' || b[i]=='O' || b[i]=='U'){
                count2++;
            }
        }
        if(count1==count2)
            return true;
        else
            return false;
    }
};