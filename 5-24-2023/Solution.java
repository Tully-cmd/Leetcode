class Solution {
    public String categorizeBox(int length, int width, int height, int mass) {
        double bulkDim = Math.pow(10.0,4.0);
        double bulkVol = Math.pow(10.0,9.0);
        boolean bulkyCheck;
        boolean heavyCheck;
        int largestDim = Math.max(Math.max(length,width),height);
        final double VOLUME = (long) length * (long) width * (long) height;

        if(mass >= 100) {
            heavyCheck = true;
        } else {
            heavyCheck = false;
        }

        if(largestDim >= bulkDim || VOLUME >= bulkVol) {
            bulkyCheck = true;
        } else {
            bulkyCheck = false;
        }

        if(bulkyCheck && heavyCheck) {
            return "Both";
        } else if (bulkyCheck) {
            return "Bulky";
        } else if (heavyCheck) {
            return "Heavy";
        } else {
            return "Neither";
        }
    }
}
