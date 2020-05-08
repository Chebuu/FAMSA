/*
This file is a part of FAMSA software distributed under GNU GPL 3 licence.
The homepage of the FAMSA project is http://sun.aei.polsl.pl/REFRESH/famsa

Authors: Sebastian Deorowicz, Agnieszka Debudaj-Grabysz, Adam Gudys

*/

#ifndef _VERSION_H
#define _VERSION_H

#define FAMSA_VER		"1.5.12"
#define FAMSA_DATE		"2020-03-24"
#define FAMSA_AUTHORS	"S. Deorowicz, A. Debudaj-Grabysz, A. Gudys"

#endif

/*
Version history:

1.5.12 (2020-03-24)
- Fixed bug with -dist_export mode (sequences not ordered as in input FASTA file)

1.5.11 (2020-03-23)
- Possiblity to choose between PartTree and MedoidTree heuristic.
- K-medoid clustering with CLARANS heuristic.

1.5.8 (2020-03-18)
- Deterministic random generator added (to make Windows and Unix results the same).

1.5.7 (2020-03-17)
- Further memory improvements.

1.5.6 (2020-03-15)
- Serious refactorization.
- Bit vectors computed when needed and released afterwards.

1.5.5 (2020-03-13)
- Segmentation fault fix.

1.5.4 (2020-03-10)
- Interface for tree import/export changed a bit.

1.5.3 (2020-03-03)
- PartTree + UPGMA support.
- Size of a cluster in PartTree added as a command line parameter.
- Optimizations in the sequence representation.
- Added option for sequence shuffling.

1.5.0 (2020-03-02)
- PartTree mode added (only single linkage trees supported).
- Since sequences are sorted, the first one can be taken as the longest one.
- Serious refactoring.

1.4.0 (2020-02-27)
- GPU mode no longer supported.
- Possibility to calculate distance matrix or guide tree without doing alignment.
- Lots of refactoring.

1.3.2 (2020-02-21)
- Approved pull request "Fix * char emitted for unknown residues, emits X instead"
- Approved pull request "Support single input fasta files"
- Version.h file added

*/