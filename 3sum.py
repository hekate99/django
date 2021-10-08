class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        if len(nums) <= 2:
            return []
        
        # trivial triplet
        if len(nums) == 3:
            if sum(nums) == 0:
                return [nums]
            else:
                return []
        
        # store values and indices 
        hash_map = {v:i for i, v in enumerate(nums)}
        
        triplets = []
        hashes = set() # for getting unique triplets
        
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                partial_sum = nums[i] + nums[j] # twosum
                
                # get index of the third element based on twosum
                try:
                    k = hash_map[-partial_sum]
                except KeyError:
                    continue
                    
                # check constraints, i!=j not required since j moves ahead of i
                if k != i and k != j:
                    # compute permutation invariant hash of the triplet
                    total_hash_sum = hash(frozenset([nums[i], nums[j], nums[k]]))
                    
                    # add unique triplet 
                    if total_hash_sum not in hashes: 
                        triplets.append([nums[i], nums[j], nums[k]])
                        hashes.add(total_hash_sum)
                    
        return triplets
        
