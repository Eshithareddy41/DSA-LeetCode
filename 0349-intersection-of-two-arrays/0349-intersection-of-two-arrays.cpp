class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>n1;
        vector<int> res;
        for(int x:nums1)
          n1.insert(x);

        for(int x:nums2)
         { if(n1.find(x)!=n1.end())
             { res.push_back(x);
               n1.erase(x);
             }
         }
  return res;

}
};