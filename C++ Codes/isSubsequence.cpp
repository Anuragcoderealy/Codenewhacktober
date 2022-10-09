bool isSubsequence(string s1, string s2) {
    //Check if string s2 is a subsequence of string s1
    if(s2.size()>s1.size()) return false;
    int j=0;
    for(int i=0;i<s1.size();i++) {
        if(s1[i]==s2[j]) {
           j++; 
        }
        if(j==s2.size()) return true;
    }
    return j==s2.size();
}
