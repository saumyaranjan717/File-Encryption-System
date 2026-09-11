README.md
# Secure File Management System in C

## Overview

The Secure File Management System is a cybersecurity-focused project written in C. It provides user authentication, encrypted file storage, access control, operation logging, and secure file deletion.

The project demonstrates core security concepts such as password hashing, encryption, file permissions, user authorization, and secure file handling.

## Features

* User registration and authentication
* Secure password storage using SHA-256 hashing
* XOR-based file encryption and decryption
* Encrypted file creation and reading
* Appending data to encrypted files
* User-based file permissions
* Operation logging with timestamps
* Secure file deletion by overwriting file contents
* Input validation and error handling

## Technologies Used

* Language: C
* Development Environment: WSL (Windows Subsystem for Linux)
* Compiler: GCC
* Cryptography Library: OpenSSL
* Hash Algorithm: SHA-256
* Encryption: 16-bit XOR encryption

## How It Works

### Authentication System

Users can register and log in using a username and password.

During registration:

* User input is validated.
* Passwords are hashed using SHA-256.
* Only hashed passwords are stored.

During login:

* The entered password is hashed.
* The hash is compared with the stored value.
* Access is granted only if credentials match.

### File Encryption

Files are encrypted using a 16-bit XOR encryption key.

The encryption process is reversible:

Encrypted Data = Plaintext XOR Key

Plaintext = Encrypted Data XOR Key

The same key is required to decrypt the file.

### File Access Control

The system manages file ownership and permissions.

Users can perform operations only if they have the required permission:

* Read
* Write
* Delete

### Logging System

All important file operations are recorded in an audit log.

Each log entry contains:

* Username
* Operation performed
* Filename
* Timestamp

### Secure File Deletion

Before deletion, file contents are overwritten to reduce the possibility of recovery before removing the file.


## Requirements

* Linux environment or WSL
* GCC compiler
* OpenSSL development library

Install OpenSSL development tools in WSL:

```bash
sudo apt install libssl-dev
```

## Security Notes

* Plaintext passwords are never stored.
* Sensitive database files should not be uploaded to GitHub.
* File permissions are restricted.
* User authorization is checked before file operations.

## Future Improvements

* Replace XOR encryption with AES encryption
* Improve key management
* Add stronger authentication methods
* Add a graphical user interface
* Expand permission management

## Author

**Saumya Ranjan**  
Electronics and Computer Engineering  
Thapar Institute of Engineering and Technology

This project was developed as part of my hands-on work in C programming, file handling, authentication, and basic cybersecurity concepts.


