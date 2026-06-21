/*
Problem: 1732. Find the Highest Altitude
Difficulty: Easy

Approach:
- The biker starts at altitude 0.
- Each gain[i] represents the change in altitude between points.
- Maintain the current altitude by continuously adding gain[i].
- Track the maximum altitude reached during the journey.
- Return the maximum altitude.

Time Complexity: O(n)
Space Complexity: O(1)

Where:
n = gainSize
*/

int largestAltitude(int* gain, int gainSize) {
    int currentAltitude = 0;
    int maxAltitude = 0;

    for(int i = 0; i < gainSize; i++) {
        currentAltitude += gain[i];

        if(currentAltitude > maxAltitude) {
            maxAltitude = currentAltitude;
        }
    }

    return maxAltitude;
}
