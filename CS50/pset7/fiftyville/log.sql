-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Get the description of the crime
-- SELECT "description"
-- FROM crime_scene_reports
-- WHERE street = 'Chamberlin Street' AND "year" = 2020 AND "month" = 7 AND "day" = 28;

-- Output:- 
    -- Theft of the CS50 duck took place at 10:15am at the Chamberlin Street courthouse. Interviews were conducted today with three witnesses who were present at the time — each of their interview transcripts mentions the courthouse.

--------------------------------------

-- Get all opend interviews after the crime time
-- SELECT id
-- FROM interviews
-- WHERE "month" = 7 AND "day" = 28

-- Output:- 
    -- interviews IDs 161, 162, 163

--------------------------------------

-- Get the license plate of cars exit at this time
-- SELECT license_plate
-- FROM courthouse_security_logs
-- WHERE "day" = 28 AND hour = 10 AND (minute BETWEEN 15 AND 25) AND activity = 'exit'

-- Output:-
    -- Plates: '5P2BI95', '94KL13X', '6P58WS2', '4328GD8', 'G412CB7', 'L93JTIZ', '322W7JE', '0NTHK55'

--------------------------------------

-- Get ATM transactions
-- SELECT *
-- FROM atm_transactions
-- WHERE atm_location = "Fifer Street" AND "month" = 7 AND "day" = 28 AND transaction_type = 'withdraw'

-- Output:-
    -- (246, 28500762, 2020, 7, 28, 'Fifer Street', 'withdraw', 48)
    -- (264, 28296815, 2020, 7, 28, 'Fifer Street', 'withdraw', 20)
    -- (266, 76054385, 2020, 7, 28, 'Fifer Street', 'withdraw', 60)
    -- (267, 49610011, 2020, 7, 28, 'Fifer Street', 'withdraw', 50)
    -- (269, 16153065, 2020, 7, 28, 'Fifer Street', 'withdraw', 80)
    -- (288, 25506511, 2020, 7, 28, 'Fifer Street', 'withdraw', 20)
    -- (313, 81061156, 2020, 7, 28, 'Fifer Street', 'withdraw', 30)
    -- (336, 26013199, 2020, 7, 28, 'Fifer Street', 'withdraw', 35)

--------------------------------------

-- Get phone Calls at the crime time and duration less than 1 min
-- SELECT *
-- FROM phone_calls
-- WHERE "month" = 7 AND "day" = 28 AND duration < 60

-- Output:-
    -- (221, '(130) 555-0289', '(996) 555-8899', 2020, 7, 28, 51)
    -- (224, '(499) 555-9472', '(892) 555-8872', 2020, 7, 28, 36)
    -- (233, '(367) 555-5533', '(375) 555-8161', 2020, 7, 28, 45)
    -- (251, '(499) 555-9472', '(717) 555-1342', 2020, 7, 28, 50)
    -- (254, '(286) 555-6063', '(676) 555-6554', 2020, 7, 28, 43)
    -- (255, '(770) 555-1861', '(725) 555-3243', 2020, 7, 28, 49)
    -- (261, '(031) 555-6622', '(910) 555-3251', 2020, 7, 28, 38)
    -- (279, '(826) 555-1652', '(066) 555-9701', 2020, 7, 28, 55)
    -- (281, '(338) 555-6650', '(704) 555-2131', 2020, 7, 28, 54)

--------------------------------------

-- Get the thief
-- SELECT "name"
-- FROM people
-- JOIN bank_accounts
-- ON people.id = person_id
-- WHERE license_plate IN (
--     SELECT license_plate
--     FROM courthouse_security_logs
--     WHERE "day" = 28 AND hour = 10 AND (minute BETWEEN 15 AND 25) AND activity = 'exit'
-- )
-- AND account_number IN (
--     SELECT account_number
--     FROM atm_transactions
--     WHERE atm_location = "Fifer Street" AND "month" = 7 AND "day" = 28 AND transaction_type = 'withdraw'
-- )
-- AND phone_number IN (
--     SELECT "caller"
--     FROM phone_calls
--     WHERE "month" = 7 AND "day" = 28 AND duration < 60
-- )
-- AND passport_number IN (
--     SELECT passport_number
--     FROM passengers
--     WHERE flight_id IS (
--         SELECT id
--         FROM flights
--         WHERE "day" = 29
--         ORDER BY hour, minute
--         LIMIT 1
--     )
-- )

-- Output:-
    -- The theif is Ernest.

--------------------------------------

-- Get the accomplice
-- SELECT "name"
-- FROM people
-- WHERE phone_number IS (
--     SELECT receiver
--     FROM phone_calls
--     WHERE "day" = 28 AND duration < 60 AND "caller" IS (
--         SELECT phone_number
--         FROM people
--         WHERE "name" = 'Ernest'
--     )
-- )

-- Output:- 
    -- the accomplice is Berthold.

--------------------------------------

-- Get the flight destination
-- SELECT city
-- FROM airports
-- WHERE id IS (
--     SELECT destination_airport_id
--     FROM flights
--     WHERE "day" = 29
--     ORDER BY hour, minute
--     LIMIT 1
-- )

-- Output:-
    -- the destination is Heathrow Airport, London.

--------------------------------------
