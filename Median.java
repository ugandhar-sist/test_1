import java.util.*;

public class Median {

    public static double findMedian(int[] arr1, int m, int[] arr2, int n) {
        // Handle the case where the first array has fewer elements
        if (m < n) {
            return findMedian(arr2, n, arr1, m);
        }

        int lo = 0, hi = n * 2;
        while (lo <= hi) {
            int mid2 = (lo + hi) / 2;
            int mid1 = m + n - mid2;

            // Handle edge cases for array indexes
            double l1 = (mid1 == 0) ? Integer.MIN_VALUE : arr1[(mid1 - 1) / 2];
            double l2 = (mid2 == 0) ? Integer.MIN_VALUE : arr2[(mid2 - 1) / 2];
            double r1 = (mid1 == m * 2) ? Integer.MAX_VALUE : arr1[mid1 / 2];
            double r2 = (mid2 == n * 2) ? Integer.MAX_VALUE : arr2[mid2 / 2];

            if (l1 > r2) {
                lo = mid2 + 1;
            } else if (l2 > r1) {
                hi = mid2 - 1;
            } else {
                return (Math.max(l1, l2) + Math.min(r1, r2)) / 2.0;
            }
        }
        return -1; // If no median is found
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int[] n1 = new int[m];
        for (int i = 0; i < m; i++) {
            n1[i] = sc.nextInt();
        }
        int n = sc.nextInt();
        int[] n2 = new int[n]; // Corrected size
        for (int j = 0; j < n; j++) {
            n2[j] = sc.nextInt();
        }

        double median = findMedian(n1, m, n2, n);
        if (median != -1) {
            System.out.println("Median: " + median);
        } else {
            System.out.println("No median found.");
        }
    }
}