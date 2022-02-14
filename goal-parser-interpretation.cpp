class Solution {
public:
    string interpret(string command) {
        int n=0;
        string ans;
        while(n<command.length())
        {
            if(command[n]=='G')
            {
                ans.push_back('G');
                n++;
            }
            else if(command[n]=='('&&command[n+1]==')')
            {
              ans.push_back('o');
                n += 2;
                
            }
            else
            {
                ans.push_back('a');
                ans.push_back('l');
                n += 4;
            }
        }
        return ans;
    }
};
