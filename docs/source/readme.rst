Readme
======
Some standards when writing documentation

All documents should be labeled with capitalized words such as "This Is a
Title". Note that "a" isn't capitalized; a, an, the, at, by, for, in,
of, on, to, up, and, as, but, or, and nor shouldn't be capitalized. = should be
used for titles, - for subsections, and ^ for subsubsections. See example below

    Title
    =====

    Subsection
    ----------

    Subsubsection
    ^^^^^^^^^^^^^

Multiple titles per document is fine as long as the two titles are unrelated.

A document containing a reference to a different document should contain a "see
also" section at the bottom linking to the document, unless the references are
already in a list like in openmw/mwworld/action.rst

Any references to classes or files should be placed inside backquotes like so:
\`\`SomeClass\`\` or \`\`SomeFile.hpp\`\`. References to member functions
should be fully qualified: \`\`SomeClass::someFunction()\`\`, though the
parameters aren't needed if no overloads exist
