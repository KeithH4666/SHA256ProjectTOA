# Theory of Algorithms Project - SHA256
###### Written by Keith Higgins

# What is the SHA256 Hashing Algorithm? 
SHA-2 (Secure Hash Algorithm 2) is a set of cryptographic hash functions designed by the United States National Security Agency (NSA).

The standard for the algorithm can be found [here](https://nvlpubs.nist.gov/nistpubs/FIPS/NIST.FIPS.180-4.pdf).

Here is a really usefull video I found which explains all the SHA algorithems:

<a href="http://www.youtube.com/watch?feature=player_embedded&v=DMtFhACPnTY
" target="_blank"><img src="http://img.youtube.com/vi/DMtFhACPnTY/0.jpg" 
alt="SHA265" width="240" height="180" border="10" /></a>

# How to Run
To run the script you need to have a c compiler installed unless you are on a linux machine.
 <br /> 
Personally I prefer Cygwin which can be downloaded from [here](https://cygwin.com/install.html).
 <br /> 
To install GCC [here](https://stackoverflow.com/questions/47215330/how-do-i-install-gcc-on-cygwin) is a really handy stackoverflow post which goes through it.

Follow these steps to then run the script.

1. Clone this repo using 'git clone https://github.com/KeithH4666/SHA256ProjectTOA'
2. Go into the cloned dircetory and run the following commands:
3. Compile - 'gcc sha256 sha256.c'
4. Execute - 'sha256'
5. Enter a file when asked (Note unless the file is directly in the root folder of the application, the full file path is required)

# Implementation
This project was completed using the guidance of video lectures created by our lecturer Dr Ian McLoughlin.
</br>
Here are the links to these videos:
* [Video - Part 1](https://web.microsoftstream.com/video/db7c03be-5902-4575-9629-34d176ff1366)
* [Video - Part 2](https://web.microsoftstream.com/video/2a86a2ac-aafb-46e0-a278-a3faa1d13cbf)
* [Video - Part 3](https://web.microsoftstream.com/video/78dc0c8d-a017-48c8-99da-0714866f35cb)
* [Video - Part 4](https://web.microsoftstream.com/video/9daaf80b-9c4c-4fdc-9ef6-159e0e4ccc13)
* [Video - Part 5](https://web.microsoftstream.com/video/200e71ec-1dc1-47a4-9de8-6f58781e3f38) 
* [Video - Part 6](https://web.microsoftstream.com/video/f823809a-d8df-4e12-b243-e1f8ed76b93f)
* [What is SHA256?](https://www.hashgains.com/wiki/s/what-is-sha-256)
* [The Difference Between SHA-1,2 and 256](https://www.thesslstore.com/blog/difference-sha-1-sha-2-sha-256-hash-algorithms)
* [SHA256 and Bitcoin](https://www.mycryptopedia.com/sha-256-related-bitcoin)
</br>
Another resource I used to find out about micro functions was [this](https://github.com/B-Con/crypto-algorithms/blob/master/sha256.c?fbclid=IwAR0s0i9xPPI5zhkQyfE4A8hjj0oTIDZBKGkyR7ruWGSM8IcKpvlyme2zHko
) github repo.
</br>
Individual research was also carried out mostly on youtube to understand how the process works.

# Demo

Here is a screenshot of my program running in the command prompt:
<img src="/Realtime.JPG" alt="Demo"/>
</br>
Here is the same text file hashed using an online hashing script found [here](https://www.movable-type.co.uk/scripts/sha256.html)
<img src="/OnlineHash.JPG" alt="Online"/>

