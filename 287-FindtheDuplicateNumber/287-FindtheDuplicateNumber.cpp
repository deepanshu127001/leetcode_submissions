        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        //cycle dectected;
        //reset slow = nums[0]index move slow and fast by 1 step
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        // return slow or fast
        return fast;
    }
};
[1,3,4,2,2]
