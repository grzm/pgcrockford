SELECT b32
  FROM (VALUES ('0'::crockford.crockford2),
               ('-0-'),
               ('-1'),
               ('-ololi-'),
               ('1ZZZ')) AS _ (b32);


SELECT '2000'::crockford.crockford2;
SELECT '-'::crockford.crockford2;
SELECT '+0'::crockford.crockford2;
SELECT 'U'::crockford.crockford2;
SELECT 'u'::crockford.crockford2;

SELECT 65535::crockford.crockford2;
SELECT 65536::crockford.crockford2;

SELECT b32
  FROM (VALUES ('0'::crockford.crockford4),
               ('-0-'),
               ('-1'),
               ('-ololi-'),
               ('3ZZZZZZ')) AS _ (b32);

SELECT 4294967295::crockford.crockford4;
SELECT 4294967296::crockford.crockford4;

SELECT '4000000'::crockford.crockford4;
SELECT '-'::crockford.crockford4;
SELECT '+0'::crockford.crockford4;

SELECT b32
  FROM (VALUES ('0'::crockford.crockford8),
               ('-0-'),
               ('-1'),
               ('-ololi-'),
               ('FZZZZZZZZZZZZ')) AS _ (b32);

SELECT 'G000000000000'::crockford.crockford8;
SELECT '-'::crockford.crockford8;
SELECT '+0'::crockford.crockford8;

