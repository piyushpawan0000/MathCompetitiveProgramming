class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int i=left;i<=right;i++)
        {
            bool isthere = true;
            string check = to_string(i);
            for(int j=0;j<check.length();j++)
            {
                int temp = check[j]-'0';
                if(temp==0)
                {
                    isthere=false;
                    break;
                }
                int rem = i%temp;
                if(rem!=0)
                {
                    isthere=false;
                    break;
                }
            }
            if(isthere)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};