class OrderedStream
{
    public:
    vector<string> arr;
    int ptr = 0;
    
    OrderedStream(int n)
    {
        arr.resize(n , "a");
    }
    
    vector<string> insert(int i, string value) 
    {
        i--;
        arr[i] =  value;
        
        vector<string> curr;
        
        while(ptr<arr.size() and arr[ptr].size()==5)
        {
            curr.push_back(arr[ptr]);
            ptr++;
        }
        return curr;
    }
};

