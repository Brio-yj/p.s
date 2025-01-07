/*
    vector<int> a
    sort(a.begin(),a.end())

    int a[7]
    sort(a,a+7)

    void cmp(int a,int b){
        
        ex) 
            return a<b 
        ex) 
            return a>b 
        ex)
            if(a%5!=b%5) return a%5 < b%5 
            return a<b

        // return~ 의 의미는 ~일때 true를 return 하는거고 true를 리턴하면 그게 sort의 규칙이 되는거다
        // stl의 sort는 단순한로직이 아니라 퀵소트 기반의 복잡한 로직을 사용하기에 
        // 우리는 그저 sort의 규칙만 정해주면 되는거다

    } 

    void cmp(string a, string b){
        return a.back()<b.back();
    }

*/