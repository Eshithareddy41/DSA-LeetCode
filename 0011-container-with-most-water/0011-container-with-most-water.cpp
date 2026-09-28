class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxarea=0;
        int res=0;

        while(left<right)
        { maxarea=(right-left)*min(height[right],height[left]);
          res=max(res,maxarea);

          if(height[left]<height[right])
            left++;
          else
            right--;
      }

      return res;
        
    }
};