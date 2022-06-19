class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        char c = '0';
        
        while(a.length()>b.length()){
            b = '0'+b;
        }
        while(a.length()<b.length()){
            a = '0'+a;
        }
        int i = a.length()-1;
        while(i>-1){
            if(a[i]=='0'&&b[i]=='0'&&c=='0'){
                ans = '0'+ans;
                c = '0';
            }
            else if(a[i]=='1'&&b[i]=='0'&&c=='0'){
                ans = '1'+ans;
                c = '0';
            }
            else if(a[i]=='1'&&b[i]=='1'&&c=='0'){
                ans = '0'+ans;
                c = '1';
            }
            else if(a[i]=='1'&&b[i]=='0'&&c=='1'){
                ans = '0'+ans;
                c = '1';
            }
            else if(a[i]=='1'&&b[i]=='1'&&c=='1'){
                ans = '1'+ans;
                c = '1';
            }
            else if(a[i]=='0'&&b[i]=='1'&&c=='0'){
                ans = '1'+ans;
                c = '0';
            }
            else if(a[i]=='0'&&b[i]=='0'&&c=='1'){
                ans = '1'+ans;
                c = '0';
            }
            else if(a[i]=='0'&&b[i]=='1'&&c=='1'){
                ans = '0'+ans;
                c = '1';
            }
            i--;
        }
        if(c=='1'){
            ans = '1'+ans;
        }
        return ans;
    }
};