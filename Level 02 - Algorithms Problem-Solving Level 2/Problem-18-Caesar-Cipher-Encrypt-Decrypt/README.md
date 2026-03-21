# Problem 18: Caesar Cipher - Encrypt & Decrypt

## 📋 Description
A C++ program that implements the classic **Caesar Cipher**
to encrypt and decrypt text using a numeric key.
Example: "Hello" with key 2 → "Jgnnq" → "Hello"

## 💡 Solution Overview
- `ReadText()` reads full line input using `getline()`
- `EncryptText()` shifts each character forward by EncryptionKey
- `DecryptText()` shifts each character backward by EncryptionKey
- `const short EncryptionKey = 2` keeps the key fixed and safe

## ⚠️ Note
Loop condition should be `i < Text.length()` not `i <= Text.length()`
to avoid accessing out-of-bounds index.

## 🔑 Key Concepts
- Caesar Cipher algorithm
- ASCII character shifting
- `getline()` for full line input
- `const` keyword for fixed values
- Symmetric encryption (same key encrypts & decrypts)

## 🔄 Logic Diagram
[Read Text]
   ↓
[Encrypt: each char += Key] → EncryptedText
   ↓
[Decrypt: each char -= Key] → DecryptedText
   ↓
[Print Original / Encrypted / Decrypted]

## 📥 Sample Input / Output
Please enter text? → Hello

Text before encryption : Hello
Text after encryption  : Jgnnq
Text after decryption  : Hello