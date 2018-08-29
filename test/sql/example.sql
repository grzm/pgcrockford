CREATE SCHEMA store;

CREATE SEQUENCE store.widgets_widget_id_seq;

CREATE TABLE store.widgets (
  widget_id crockford.crockford4 PRIMARY KEY
    DEFAULT nextval('store.widgets_widget_id_seq'),
  widget_name text NOT NULL UNIQUE
);

INSERT INTO store.widgets (widget_name)
  SELECT 'widget' || n FROM generate_series(1,64) AS _ (n);

SELECT * FROM store.widgets ORDER BY widget_id DESC LIMIT 10;

CREATE SEQUENCE store.locations_location_id_seq;

CREATE FUNCTION
store.next_location_id()
RETURNS crockford.crockford4
STRICT LANGUAGE sql AS $body$
SELECT ('S0000'::crockford.crockford4 + nextval('store.locations_location_id_seq'))::crockford.crockford4
$body$;

CREATE TABLE store.locations (
  location_id crockford.crockford4 PRIMARY KEY
    DEFAULT store.next_location_id(),
  location_name text NOT NULL UNIQUE
);

INSERT INTO store.locations (location_name)
  SELECT 'location' || n FROM generate_series(1,64) AS _ (n);

SELECT * FROM store.locations ORDER BY location_id DESC LIMIT 10;


set client_min_messages to warning;
drop schema store cascade;
