vector<int> rabinKarp(string txt, string pat) {
    int hashpat=0, hashtxt=0;
    for(int i=0;i<pat.size();i++) {
        hashpat+=pat[i]-'A';
        hashtxt+=txt[i]-'A';
    }
    
    vector<int> res;
    if(hashpat==hashtxt && pat==txt.substr(0, pat.size())) res.push_back(0);
    for(int i=pat.size();i<txt.size();i++) {
        hashtxt+=(txt[i]-'A');
        hashtxt-=(txt[i-pat.size()]-'A');
        if(hashpat==hashtxt && pat==txt.substr(i-pat.size()+1, pat.size())) res.push_back(i-pat.size()+1);
    }
    
    return res;
}
