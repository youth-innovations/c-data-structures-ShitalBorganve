[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/-IlEz6Z0)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=15276984&assignment_repo_type=AssignmentRepo)
<details>
<summary><strong>Welcome, Engineering Students! 🚀</strong></summary>

Welcome to our engineering community! We're thrilled to have you on board. Engineering is a journey filled with challenges and triumphs, and we're here to support you every step of the way.

As you embark on this exciting adventure, remember that you're not alone. Our community is a place where you can learn, grow, and thrive. Whether you're passionate about coding, design, robotics, or any other field of engineering, there's a place for you here.

Together, we'll tackle complex problems, push the boundaries of innovation, and make a positive impact on the world. So roll up your sleeves, unleash your creativity, and let's build something incredible together!

Welcome aboard, future engineers. Your journey starts now. Let's make it unforgettable! 💡✨🔧🔬🔭🌟
</details>
<details>
<summary><strong>About Encryption and Decryption 🛡️</strong></summary>

**Encryption** and **decryption** are fundamental concepts in cybersecurity and data protection.

**Encryption** is the process of converting *plaintext* data into *ciphertext*, making it unreadable to unauthorized users. This is typically achieved using algorithms and keys. Only authorized users with the correct **decryption key** can transform the *ciphertext* back into its original *plaintext* form.

**Decryption** is the reverse process of **encryption**. It involves converting the encrypted *ciphertext* back into its original *plaintext* using the correct **decryption key**.

**Real-World Use Case:** One common use case for **encryption** is secure communication over the internet. When you make a purchase online or log in to your bank account, your sensitive information is **encrypted** before being sent over the network. This ensures that even if intercepted, the data remains secure and unreadable to anyone without the **decryption key**.

For more information about the **encryption** method we are implementing, check out the [Caesar Cipher Wikipedia page](https://en.wikipedia.org/wiki/Caesar_cipher).

</details>
<details>
<summary><strong>About the Assignment 📝</strong></summary>

In this assignment, students are tasked with implementing two methods within the `caesar_cipher.c` file. They must provide the implementation for the following methods:

1. **`caesar_encrypt`:** This method should take a *plaintext* message and a *key* as input, and encrypt the message using the **Caesar cipher** algorithm.
   
2. **`caesar_decrypt`:** This method should take a *ciphertext* message and a *key* as input, and decrypt the message using the **Caesar cipher** algorithm.

Students are only allowed to modify the `caesar_cipher.c` file to implement these methods. All other files and functionalities should remain untouched.

For more information about the Caesar cipher encryption method, please refer to the [Caesar Cipher Wikipedia page](https://en.wikipedia.org/wiki/Caesar_cipher).
</details>
<details>
<summary><strong>What You Need to Do ✅</strong></summary>

1. **Clone the Repository**: Start by cloning the repository using the following command:
   ```bash
   git clone <repository_url>
   ```
2. **Implement the Methods**: Navigate to the `src/caesar_cipher.c` file and implement the `caesar_encrypt` and `caesar_decrypt` methods as instructed.

3. **Build the Code**: Once you've implemented the methods, build the code using the make command in the terminal:

   ```make```
4. **Test Your Code**: Use the make test command to run the test suite and ensure your implementations are correct:

   ```make test```

Follow these steps carefully to complete the assignment. Happy coding! 🚀

</details>
<details>
<summary><strong>Final Steps: Commit and Push Your Changes 🚀</strong></summary>

If everything looks good and your code is working as expected, it's time to commit and push your changes to the repository.

1. **Add Changes**: Add all modified files to the staging area using the following command:
   ```bash
   git add .
   git commit -m "Implement Caesar cipher encryption and decryption methods"
   git push origin main
   ```
