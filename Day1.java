public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int start = 1;
        int end = n;
        int mid = (start + (end - start) / 2);
        while (start <= end)
        {
            if (isBadVersion(mid))
                end = mid - 1;
            else
                start = mid + 1;
            mid = (start + (end - start) / 2);
        }
        return isBadVersion(start) ? start : start + 1;
    }
}
