class Solution {

  public int getCommon(int[] nums1, int[] nums2) {

    int n1Index = 0;
    int n2Index = 0;
    int n1Low = nums1[n1Index];
    int n2Low = nums2[n2Index];

    while(n1Low != n2Low) {

      if(n1Low < n2Low && n1Index + 1 < nums1.length) {
        n1Index = n1Index + 1;
        n1Low = nums1[n1Index];
        continue;
      }

      if(n2Low < n1Low && n2Index + 1 < nums2.length) {
        n2Index = n2Index + 1;
        n2Low = nums2[n2Index];
        continue;
      }

      break;
    }

    if(n1Low == n2Low) {

      return n1Low;
    } else {

      return -1;
    }
  }
}
