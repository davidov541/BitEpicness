			move $s0, $0
infinite: 	j infinite
			nop
			nop
			nop
			nop
			nop
			rp $t0, 2
			add $s0, $t0
			move $s0, $rr
			wp $s0, 0
			mfc0 $t0, $epc
			jr $t0