class ProductOfNumbers {
public:
    vector<int>temp;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        temp.push_back(num);
    }
    
    int getProduct(int k) {
        int res=1;
        int j=1;
        for(int i=temp.size()-1;i>=0 and j<=k;i--)
        {
            res*=temp[i];
            j++;
        }
        return res;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */