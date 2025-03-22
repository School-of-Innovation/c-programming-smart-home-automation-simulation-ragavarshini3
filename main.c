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
 
 // Function to initialize the system
 void initializeSystem(int lights[], int temperatures[], int motion[], int locks[]) {
     for (int i = 0; i < MAX_ROOMS; i++) {
         lights[i] = 0;  // Lights OFF
         locks[i] = 1;   // Doors LOCKED
         motion[i] = 0;  // No Motion Detected
         temperatures[i] = 20 + (i * 2);  // Assigning some default temperatures
     }
     printf("System initialized with %d rooms.\n", MAX_ROOMS);
 }
 
 // Function to display menu
 void displayMenu() {
     printf("\n===== Smart Home Menu =====\n");
     printf("1. Toggle Light\n");
     printf("2. Read Temperature\n");
     printf("3. Check Motion Sensor\n");
     printf("4. Lock/Unlock Security System\n");
     printf("5. House Status Summary\n");
     printf("6. Exit\n");
 }
 
 // Function to toggle lights
 void controlLights(int lights[]) {
     int room;
     printf("Enter room number to toggle light (1-%d): ", MAX_ROOMS);
     scanf("%d", &room);
 
     if (room < 1 || room > MAX_ROOMS) {
         printf("Invalid room number!\n");
         return;
     }
 
     lights[room - 1] = !lights[room - 1];
     printf("Light in Room %d is now %s.\n", room, lights[room - 1] ? "ON" : "OFF");
 }
 
 // Function to read temperature of a room
 void readTemperature(int temperatures[]) {
     int room;
     printf("Enter room number to read temperature (1-%d): ", MAX_ROOMS);
     scanf("%d", &room);
 
     if (room < 1 || room > MAX_ROOMS) {
         printf("Invalid room number!\n");
         return;
     }
 
     printf("Temperature in Room %d: %d°C\n", room, temperatures[room - 1]);
 }
 
 // Function to check motion sensor
 void detectMotion(int motion[]) {
     int room;
     printf("Enter room number to check motion sensor (1-%d): ", MAX_ROOMS);
     scanf("%d", &room);
 
     if (room < 1 || room > MAX_ROOMS) {
         printf("Invalid room number!\n");
         return;
     }
 
     printf("Motion sensor in Room %d: %s\n", room, motion[room - 1] ? "Motion Detected" : "No Motion");
 }
 
 // Function to lock/unlock doors
 void securitySystem(int locks[]) {
     int room;
     printf("Enter room number to toggle lock (1-%d): ", MAX_ROOMS);
     scanf("%d", &room);
 
     if (room < 1 || room > MAX_ROOMS) {
         printf("Invalid room number!\n");
         return;
     }
 
     locks[room - 1] = !locks[room - 1];
     printf("Room %d is now %s.\n", room, locks[room - 1] ? "LOCKED" : "UNLOCKED");
 }
 
 // Function to analyze house status
 void analyzeHouseStatus(int lights[], int temperatures[], int motion[], int locks[]) {
     printf("\n===== House Status Summary =====\n");
 
     for (int i = 0; i < MAX_ROOMS; i++) {
         printf("- Room %d: Light %s, Temp %d°C, %s, %s\n",
                i + 1,
                lights[i] ? "ON" : "OFF",
                temperatures[i],
                motion[i] ? "Motion Detected" : "No Motion",
                locks[i] ? "Locked" : "Unlocked");
     }
 } 