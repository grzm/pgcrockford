-- reference
SELECT hashint4(55);
SELECT hashoid(55);

SELECT base32.hashbase32uint2('1Q'::base32.base32uint2);
SELECT base32.hashbase32uint4('1Q'::base32.base32uint4);
SELECT base32.hashbase32uint8('1Q'::base32.base32uint8);
