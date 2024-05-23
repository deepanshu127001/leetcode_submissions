
        while(j<=k){
            if(nums[j]==1)j++;
            else if(nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }   
            else{ //nums[j]==0
                swap(nums[j],nums[i]);
                i++;j++;
            }
        }
        
    }
        int k=nums.size()-1;//denotes 2
        int j=0;//denotes 1
[2,0,2,1,1,0]
