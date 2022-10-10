class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool flag;
        if(ransomNote.length()>magazine.length())
            return false;
        else
        {
            for(int i=0;i<ransomNote.length();i++)
            {
                flag=false;
                for(int j=0;j<magazine.length();j++)
                {
                    if(ransomNote[i]==magazine[j])
                    {
                        flag=true;
                        magazine[j]='*';
                        break;
                    }
                }
                if(flag==false)
                    break;
            }
            return flag;
        }
    }
};