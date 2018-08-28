SELECT b32
  FROM (VALUES ('0'::base32.base32uint2),
               ('-0-'),
               ('1ZZZ'),
               ('-1')) AS _ (b32);


SELECT '2000'::base32.base32uint2;
SELECT '-'::base32.base32uint2;
SELECT '+0'::base32.base32uint2;

SELECT b32
  FROM (VALUES ('0'::base32.base32uint4),
               ('-0-'),
               ('3ZZZZZZ'),
               ('-1')) AS _ (b32);


SELECT '4000000'::base32.base32uint4;
SELECT '-'::base32.base32uint4;
SELECT '+0'::base32.base32uint4;

SELECT b32
  FROM (VALUES ('0'::base32.base32uint8),
               ('-0-'),
               ('FZZZZZZZZZZZZ')) AS _ (b32);

SELECT 'G000000000000'::base32.base32uint8;
SELECT '-'::base32.base32uint8;
SELECT '+0'::base32.base32uint8;
