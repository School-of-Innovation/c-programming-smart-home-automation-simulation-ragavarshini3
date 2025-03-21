/*
 * 🚨 WARNING: CHALLENGE MODE ACTIVATED 🚨
 * 
 * 1️⃣ Sit back, take a deep breath, and **THINK**.
 * 2️⃣ For the next **10 minutes**, avoid using **Gen AI, ChatGPT, or any shortcuts**.
 * 3️⃣ Trust your **brain**—you’re smarter than you think!
 * 4️⃣ Consider yourself a **LOSER** if you cheat. Seriously, promise yourself you won't. 😤
 * 5️⃣ If you solve it on your own, **you WIN** and level up as a true programmer and come and meet me ! 
 * 
 * 
 * 💡 Remember: The best coders aren’t the ones who copy-paste. They are the ones who **struggle, think, fail, and then succeed.** 
 *    
 * Now, write your code! You got this! 💪🔥
 */

 #include <stdio.h>

 #define MAX_ROOMS 5  // Max number of rooms
 
 // Function prototypes
 void initializeSystem(int lights[], int temperatures[], int motion[], int locks[]);
 void displayMenu();
 void controlLights(int lights[]);
 void readTemperature(int temperatures[]);
 void detectMotion(int motion[]);
 void securitySystem(int locks[]);
 void analyzeHouseStatus(int lights[], int temperatures[], int motion[], int locks[]);
 
 int main() {
     int lights[MAX_ROOMS];       // Stores ON/OFF states
     int temperatures[MAX_ROOMS]; // Stores temperature values
     int motion[MAX_ROOMS];       // Stores motion detection (1 for detected, 0 for none)
     int locks[MAX_ROOMS];        // Stores lock states (1 for locked, 0 for unlocked)
     
     initializeSystem(lights, temperatures, motion, locks); // Initialize system
 
     int choice;
     while (1) {
         displayMenu();
         printf("Enter your choice: ");
         scanf("%d", &choice);
 
         switch (choice) {
             case 1:
                 controlLights(lights);
                 break;
             case 2:
                 readTemperature(temperatures);
                 break;
             case 3:
                 detectMotion(motion);
                 break;
             case 4:
                 securitySystem(locks);
                 break;
             case 5:
                 analyzeHouseStatus(lights, temperatures, motion, locks);
                 break;
             case 6:
                 printf("Exiting... Goodbye!\n");
                 return 0;
             default:
                 printf("Invalid choice! Please select a valid option.\n");
         }
     }
 
     return 0;
 }
 
 