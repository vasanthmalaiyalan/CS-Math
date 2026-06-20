இது Paul Lockhart எழுதிய *Arithmetic* புத்தகத்தின் மிக முக்கியமான அத்தியாயங்களில் ஒன்று. உண்மையில் அவர் "Machines" பற்றி பேசுவது mechanical calculators பற்றிய வரலாறு மட்டுமல்ல. அவர் சொல்ல வருவது:

> **Arithmetic-ஐ புரிந்துகொள்ளாமல் செய்யலாம். ஆனால் புரிந்துகொள்ளாமல் செய்யும் வேலையை மனிதன் ஏன் செய்ய வேண்டும்? அதை machine செய்யட்டுமே.**

இந்த அத்தியாயத்தின் ஆழமான கருத்துகளை ஒவ்வொன்றாகப் பார்ப்போம்.

---

# 1. Arithmetic-ஐ புரியாமல் செய்ய முடியுமா?

ஆம்.

உதாரணமாக,

```text
173 × 254
```

என்று கொடுத்தால்,

சிலர்

```text
173
254
----
692
865
346
----
43942
```

என்று algorithm மட்டும் பின்பற்றுவார்கள்.

ஆனால்

* ஏன் இப்படிச் செய்கிறோம்?
* ஏன் carry வருகிறது?
* ஏன் digit shift செய்கிறோம்?

என்பது தெரியாமல் இருக்கலாம்.

Lockhart சொல்வது:

> புரிதல் இல்லாமல் symbol-களை நகர்த்துவதற்கு மனிதனை train செய்யலாம்.

அதாவது,

```text
2×7=14
carry 1
...
```

என்று rote procedure.

---

# 2. இப்படிப்பட்ட வேலைகளை machine செய்ய வேண்டும்

மனிதன் repetitive வேலைகளை விரும்ப மாட்டான்.

அதனால்

* Plow
* Potter wheel
* Loom
* Sewing machine

போல

Arithmetic-க்கும் machine உருவாக்கினான்.

ஏன்?

ஏனென்றால்

```text
symbol shifting
carry
borrow
```

இவை எல்லாம் mechanical.

புரிதல் தேவையில்லை.

---

# 3. Machine-க்கு understanding தேவையில்லை

Machine-க்கு

```text
7+8=15
```

என்பது தெரியாது.

அது

"7" என்ன என்பதும் தெரியாது.

அது செய்ய வேண்டியது:

```text
input வந்தால்
இந்த gear திரும்ப வேண்டும்
```

அவ்வளவுதான்.

---

# 4. முதல் counter

ஒரு scroll:

```text
0
1
2
3
4
...
```

ஒவ்வொரு turn-க்கும்

scroll அடுத்த number-க்கு நகரும்.

அதாவது

```text
0 → 1 → 2 → 3
```

இது addition by 1.

---

# 5. Ratchet

Wheel பின்னால் திரும்பாமல் இருக்க

ratchet mechanism.

இதனால்

ஒவ்வொரு click

ஒரு increment.

இதே principle:

* odometer
* tally counter

---

# 6. Scroll மோசமான idea

ஏன்?

999 வரை போனால்

மீண்டும் 0-க்கு வர rewind செய்ய வேண்டும்.

அதனால் புதிய idea.

---

# 7. Digit wheels

ஒவ்வொரு digit-க்கும் தனி wheel

```text
ones
tens
hundreds
thousands
```

உதாரணம்

3285

என்றால்

நான்கு wheels.

---

# 8. மிகப் பெரிய பிரச்சினை

9க்கு பிறகு?

Ones wheel

```text
8
9
0
```

ஆகும்போது

tens wheel-க்கு

"நான் overflow ஆகிட்டேன்"

என்று சொல்ல வேண்டும்.

Machine பேச முடியாது.

அதற்காக

## Carry pin

---

# 9. Carry pin = mechanical carry

9 → 0

ஆகும் போது

ஒரு pin

அடுத்த wheel-ஐ தள்ளும்.

அதனால்

```text
0099

↓

0100
```

தானாக நடக்கும்.

Machine-க்கு arithmetic தெரியாது.

ஆனால்

Carry தெரியும்.

---

# 10. ஏன் இது அழகானது?

Machine

"தான்"

react செய்கிறது.

0999

↓

1000

ஆகும் போது

மற்ற wheels

தானாக நகரும்.

Lockhart-க்கு இது உயிர் உள்ளதைப் போல தோன்றுகிறது.

---

# 11. Carry pin = transistor = neuron

Carry pin

ஒரு switch.

Transistor

ஒரு switch.

Neuron

ஒரு biological switch.

அனைத்தும்

Input வந்தால்

வேறு behavior காட்டும்.

---

ஒரு transistor:

```text
Voltage வந்தால்

ON

இல்லையென்றால்

OFF
```

அவ்வளவுதான்.

ஆனால்

பில்லியன் transistor-கள் சேர்ந்தால்

Computer.

100 billion neurons சேர்ந்தால்

Brain.

எனவே

Lockhart கேட்கிறார்:

> நாமும் carry pins குவியல் தானா?

சிறிது philosophical humor!

---

# 12. Curta calculator

1930s

Mechanical masterpiece.

சிறிய cylinder.

இதனால்

* Addition
* Subtraction
* Multiplication
* Division

seconds-ல் செய்யலாம்.

அதன் உள்ளே

hundreds of gears.

ஆனால் எல்லாம் carry mechanism.

---

# 13. Electric calculators

பிறகு

motor

gear

automatic shifting

இவற்றுடன்

desk calculators.

பெரிய சத்தம்:

```text
ka-chunk
ka-chunk
ka-chunk
```

என்று multiplication செய்தது.

---

# 14. Transistor revolution

1950.

Transistor வந்ததும்

moving parts இல்லாமல்

electronics.

---

Transistor:

```text
ON
OFF
```

மட்டும்.

Binary.

அதாவது

Base 2.

---

13 decimal

=

1101 binary

Machine memory-ல்

இப்படித்தான் இருக்கும்.

---

# 15. Seven segment display

நாம் பார்க்கும்

0 1 2 3 4 ...

இவை machine-க்கு இல்லை.

Machine உள்ளே:

```text
1101
```

மட்டுமே.

Display-ல்

ஏழு LED களை

ON/OFF செய்து

4,5,6 காட்டுகிறது.

உதாரணம்:

4

=

```text
OFF
ON
ON
ON
OFF
ON
OFF
```

---

# 16. Technology-ன் பாதை

ஒரு skill:

முதலில்

Craft.

↓

Procedure.

↓

Algorithm.

↓

Machine.

↓

Software.

↓

Invisible.

---

உதாரணம்:

Arithmetic

↓

Long division

↓

Mechanical calculator

↓

Electronic calculator

↓

Phone app

↓

AI

---

# 17. ஆனால் ஆபத்து?

Machine வேலை செய்தாலும்

craft மறைந்து போகும்.

பழைய printer:

* type setting
* ink
* alignment

இவற்றின் அழகு தெரியும்.

Computer user:

Click → Print

அவ்வளவுதான்.

அதே போல

Calculator user:

```text
173×254 =
43942
```

பதில் மட்டும்.

ஆனால்

ஏன்?

எப்படி?

என்பது தெரியாமல் போகலாம்.

---

# Lockhart-ன் இறுதி message

அவர் சொல்லுவது:

> Calculator பயன்படுத்தாதே என்று அல்ல.

அவர் சொல்வது:

> Boring mechanical work-ஐ machine செய்யட்டும்.

ஆனால்

**அதன் பின்னால் இருக்கும் ideas-ஐ மனிதன் புரிந்து கொள்ள வேண்டும்.**

ஏனென்றால்

Arithmetic-ன் உண்மையான மகிழ்ச்சி

```text
Carry செய்வதில் இல்லை.

Long division செய்வதில் இல்லை.

Calculator button அழுத்துவதிலும் இல்லை.

Numbers எப்படி behave செய்கின்றன என்பதைப் புரிந்து கொள்வதில்தான்.
```

அதனால் தான் அவர் இறுதியில் சொல்கிறார்:

> **"Give me a machine for the dull mechanical grunt work, and leave my mind free for the more interesting and imaginative things in life, such as mathematics."**

அதாவது

**"சலிப்பான வேலைகளை machine செய்யட்டும்; என் மனதை mathematics-க்கு விடு."**

இதுதான் இந்த முழு அத்தியாயத்தின் ஆன்மா.
