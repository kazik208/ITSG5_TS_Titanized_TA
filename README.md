# ITSG5_TS_Titanized
ETSI TR103099 Test Suite (revision 2240 of ETSI SVN) ported to be able to be compiled and run by Titan

## TODO LIST
- Security layer
- Test the correct behaviour of the TS and solve bugs!

## To compile and execute the Test Suite:

Install Titan, set env variables.

Compile:
```
$ cd <installation_dir>/build
$ make
```

Uncomment the relevant section in cfg.cfg under the build directory:
```
[EXECUTE]
ItsBtp_TestControl.control
//ItsCam_TestControl.control
//ItsDenm_TestControl.control
//ItsIpv6OverGeoNetworking_TestControl.control
//ItsGeoNetworking_TestControl.control
```

Go to ITS_TS_Titanized_TA/titan_tri_mapper directory. In the file taproperties.cfg modify "LocalEthernetMAC": "ecf4bb350b3e" to match the MAC address of the local ethernet card where the TS will be running.

Run:
```
sudo java -jar TitanTriMapper.jar -l info &
cd ../build
ttcn3_start ./ITS_Exec cfg.cfg
```

## More info on TITAN:
https://github.com/eclipse/titan.core


