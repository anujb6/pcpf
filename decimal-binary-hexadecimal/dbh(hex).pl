dec_to_hex(Value,Atom) :-
    Value =< 0xFF, !,
    format(atom(Atom_lower),'~|~`0t~16r~2|',Value),
    upcase_atom(Atom_lower,Atom).
dec_to_hex(Value,Atom) :-
    Value =< 0xFFFF, !,
    format(atom(Atom_lower),'~|~`0t~16r~4|',Value),
    upcase_atom(Atom_lower,Atom).
dec_to_hex(Value,Atom) :-
    Value =< 0xFFFFFFFF, !,
    format(atom(Atom_lower),'~|~`0t~16r~8|',Value),
    upcase_atom(Atom_lower,Atom).
dec_to_hex(Value,Atom) :-
    Value =< 0xFFFFFFFFFFFFFFFF,
    format(atom(Atom_lower),'~|~`0t~16r~16|',Value),
    upcase_atom(Atom_lower,Atom).
dec_to_hex(Value,Atom) :-
    format(atom(Atom_lower),'~16r',Value),
    upcase_atom(Atom_lower,Atom).
